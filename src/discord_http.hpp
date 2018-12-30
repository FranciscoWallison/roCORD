//
//  discord_http.hpp
//  roCORD
//
//  Created by Norman Ziebal on 22.08.18.
//  Copyright © 2018 Norman Ziebal. All rights reserved.
//

#ifndef discord_http_hpp
#define discord_http_hpp

#include "discord_log.hpp"
#include <curl/curl.h>
#include <iostream>
#include <stdio.h>
#include <string>

namespace rocord {
class http {
public:
  http(std::string token, std::shared_ptr<log> logger); // TODO copy by value
  virtual ~http();
  void send(const std::string &payload, const std::string &channel_id);
  void setDisplayName(const std::string &display_name,
                      const std::string &guild_id);

private:
  CURL *curl;
  std::string token; // TODO should be const
  std::shared_ptr<log> logger;
  //size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata);
  void request(struct curl_slist *header,
               const std::string &request_type /* TODO ENUM */,
               const std::string &url, const std::string &content);
};
}
#endif /* discord_http_hpp */
