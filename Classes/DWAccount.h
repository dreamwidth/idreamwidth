//
//  DWAccount.h
//  iDreamwidth
//
//  Copyright (c) 2010, Xerxes Botkin
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of iDreamwidth nor the
//    names of its contributors may be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL XERXES BOTKIN BE LIABLE FOR ANY
//  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <Foundation/Foundation.h>

// DWAccount corresponds to an a
@interface DWAccount : NSObject<NSCoding> {
    NSString *username;
    NSString *password;
    int accountNum; // corresponds to position in App Delegate's accounts array
    int accountType; // integer representing what site account is for
    NSArray *postToArray; // contains NSStrings of journals account has access to
    NSArray *subscriptionsArray; // NSStrings of Reading RSS feed URLs
}

// Creates a new account with the given username, password, and corresponding account type
- (id)initWithUsername:(NSString *)user withPassword:(NSString *)pass withType:(int)type;

// Updates account's journal access and reading subscription RSS URL feeds
- (void)update:(id)sender;

// Updates the account's journal access
- (void)updatePostTo:(id)sender;

// Updates the account's reading subscription RSS URL feeds
- (void)updateSubscriptions:(id)sender;

@property(nonatomic, retain) NSString *username;
@property(nonatomic, retain) NSString *password;
@property(nonatomic, retain) NSArray *postToArray;
@property(nonatomic, retain) NSArray *subscriptionsArray;
@property(nonatomic) int accountType;
@property(nonatomic) int accountNum;

@end
