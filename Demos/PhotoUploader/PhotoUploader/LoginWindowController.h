//
//  LoginWindowController.h
//  PhotoUploader
//
//  Created by Justin Spahr-Summers on 19.07.12.
//  Copyright (c) 2012 Justin Spahr-Summers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface LoginWindowController : NSWindowController
/*
 * A subscribable that sends the access token, and then sends completed, when
 * the user finishes logging in successfully.
 */
@property (nonatomic, strong, readonly) RACSubscribable *loginSubscribable;
@end
