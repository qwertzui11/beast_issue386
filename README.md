# beast_issue386
https://github.com/vinniefalco/Beast/issues/386

```
g++ --version
g++ (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609
```

# compilation resu;t
```
In file included from [...]/beast_issue386/beast_issue386/Beast/include/beast/http/read.hpp:514:0,
                 from [...]/beast_issue386/beast_issue386/Beast/include/beast/http.hpp:21,
                 from [...]/beast_issue386/beast_issue386/test.cpp:3:
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp: In instantiation of ‘std::size_t beast::http::detail::read_some_buffer(SyncReadStream&, DynamicBuffer&, beast::http::basic_parser<isRequest, isDirect, Derived>&, beast::error_code&) [with SyncReadStream = boost::asio::basic_stream_socket<boost::asio::ip::tcp>; DynamicBuffer = beast::buffers_adapter<boost::asio::mutable_buffers_1>; bool isRequest = false; bool isDirect = false; Derived = beast::http::header_parser<false, beast::http::basic_fields<std::allocator<char> > >; std::size_t = long unsigned int; beast::error_code = boost::system::error_code]’:
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:179:36:   required from ‘std::size_t beast::http::detail::read_some(SyncReadStream&, DynamicBuffer&, beast::http::basic_parser<isRequest, false, Derived>&, beast::error_code&) [with SyncReadStream = boost::asio::basic_stream_socket<boost::asio::ip::tcp>; DynamicBuffer = beast::buffers_adapter<boost::asio::mutable_buffers_1>; bool isRequest = false; Derived = beast::http::header_parser<false, beast::http::basic_fields<std::allocator<char> > >; std::size_t = long unsigned int; beast::error_code = boost::system::error_code]’
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:269:22:   required from ‘void beast::http::read(SyncReadStream&, DynamicBuffer&, beast::http::basic_parser<isRequest, isDirect, Derived>&, beast::error_code&) [with SyncReadStream = boost::asio::basic_stream_socket<boost::asio::ip::tcp>; DynamicBuffer = beast::buffers_adapter<boost::asio::mutable_buffers_1>; bool isRequest = false; bool isDirect = false; Derived = beast::http::header_parser<false, beast::http::basic_fields<std::allocator<char> > >; beast::error_code = boost::system::error_code]’
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:245:9:   required from ‘void beast::http::read(SyncReadStream&, DynamicBuffer&, beast::http::basic_parser<isRequest, isDirect, Derived>&) [with SyncReadStream = boost::asio::basic_stream_socket<boost::asio::ip::tcp>; DynamicBuffer = beast::buffers_adapter<boost::asio::mutable_buffers_1>; bool isRequest = false; bool isDirect = false; Derived = beast::http::header_parser<false, beast::http::basic_fields<std::allocator<char> > >]’
[...]/beast_issue386/beast_issue386/test.cpp:17:44:   required from here
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:56:29: error: no matching function for call to ‘read_size_helper(beast::buffers_adapter<boost::asio::mutable_buffers_1>&, int)’
             read_size_helper(buffer, 65536);
                             ^
In file included from [...]/beast_issue386/beast_issue386/Beast/include/beast/core/multi_buffer.hpp:323:0,
                 from [...]/beast_issue386/beast_issue386/test.cpp:1:
[...]/beast_issue386/beast_issue386/Beast/include/beast/core/impl/multi_buffer.ipp:856:1: note: candidate: template<class Allocator> std::size_t beast::read_size_helper(const beast::basic_multi_buffer<Allocator>&, std::size_t)
 read_size_helper(basic_multi_buffer<
 ^
[...]/beast_issue386/beast_issue386/Beast/include/beast/core/impl/multi_buffer.ipp:856:1: note:   template argument deduction/substitution failed:
In file included from [...]/beast_issue386/beast_issue386/Beast/include/beast/http/read.hpp:514:0,
                 from [...]/beast_issue386/beast_issue386/Beast/include/beast/http.hpp:21,
                 from [...]/beast_issue386/beast_issue386/test.cpp:3:
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:56:29: note:   ‘beast::buffers_adapter<boost::asio::mutable_buffers_1>’ is not derived from ‘const beast::basic_multi_buffer<Allocator>’
             read_size_helper(buffer, 65536);                                                                                                                                                                                                                                  
                             ^
In file included from /usr/include/boost/asio.hpp:32:0,
                 from [...]/beast_issue386/beast_issue386/test.cpp:4:
/usr/include/boost/asio/basic_streambuf.hpp:357:20: note: candidate: template<class Allocator> std::size_t boost::asio::read_size_helper(boost::asio::basic_streambuf<Allocator>&, std::size_t)
 inline std::size_t read_size_helper(                                                                                                                                                                                                                                          
                    ^
/usr/include/boost/asio/basic_streambuf.hpp:357:20: note:   template argument deduction/substitution failed:
In file included from [...]/beast_issue386/beast_issue386/Beast/include/beast/http/read.hpp:514:0,
                 from [...]/beast_issue386/beast_issue386/Beast/include/beast/http.hpp:21,
                 from [...]/beast_issue386/beast_issue386/test.cpp:3:
[...]/beast_issue386/beast_issue386/Beast/include/beast/http/impl/read.ipp:56:29: note:   ‘beast::buffers_adapter<boost::asio::mutable_buffers_1>’ is not derived from ‘boost::asio::basic_streambuf<Allocator>’
             read_size_helper(buffer, 65536);                                                                                                                                                                                                                                  
                             ^

```


