//
//  discord_bot.hpp
//  roCORD
//
//  Created by Norman Ziebal on 21.08.18.
//  Copyright © 2018 Norman Ziebal. All rights reserved.
//

#ifndef discord_bot_hpp
#define discord_bot_hpp

#include <string>
#include <stdio.h>
#include <iostream>

void discord_toDiscord(std::string msg);
void discord_handle();
int discord_init();
void discord_free();

#endif /* discord_bot_hpp */
