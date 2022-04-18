//
// Created by Izumi Sakai on 4/16/22.
//

#ifndef TOY_LANGUAGE_TOKEN_H
#define TOY_LANGUAGE_TOKEN_H

enum Token {
    tok_eof = -1,
    tok_def = -2,
    tok_extern = -3,
    tok_identifier = -4,
    tok_number = -5,
};
#endif //TOY_LANGUAGE_TOKEN_H