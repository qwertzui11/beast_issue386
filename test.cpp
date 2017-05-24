// #include <beast/core/multi_buffer.hpp>
// #include <beast/core/buffers_adapter.hpp>
#include <beast/core.hpp>
#include <beast/http.hpp>
#include <boost/asio.hpp>

int main() {
    boost::asio::io_service service;
    boost::asio::ip::tcp::socket stream{service};
    beast::http::header_parser<false, beast::http::fields> parser;
#if 1
    using cache_type = boost::asio::streambuf;
    cache_type streambuf;
    beast::buffers_adapter<cache_type::mutable_buffers_type> cache(streambuf.prepare(512));
#else
    beast::multi_buffer cache;
#endif
    beast::http::read(stream, cache, parser);

    return 0;
}


