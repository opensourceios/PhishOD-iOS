//
//  Configuration.h
//  Phish Tracks
//
//  From: http://mobile.tutsplus.com/tutorials/iphone/ios-quick-tip-managing-configurations-with-ease/
//
//  Created by Alexander Bird on 10/29/13.
//  Copyright (c) 2013 Alec Gorge. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Configuration : NSObject

#pragma mark -
+ (NSString *)configuration;

#pragma mark -
+ (NSString *)ptsApiKey;
+ (NSString *)ptsApiBaseUrl;

@end
