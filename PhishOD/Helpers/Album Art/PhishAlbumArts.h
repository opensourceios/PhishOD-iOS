//
//  PhishAlbumArts.h
//  PhishOD
//
//  Created by Alec Gorge on 9/27/15.
//  Copyright (c) 2015 Blue Paint, LLC. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <EDColor/EDColor.h>


@interface PhishAlbumArts : NSObject

// Drawing Methods
+ (void)drawShatterExplosionWithBaseColor:(UIColor *)color
                                     date:(NSString *)dateStr
                                    venue:(NSString *)venueStr
                              andLocation:(NSString *)locationStr;

+ (void)drawRandomFlowersWithBaseColor:(UIColor *)color
                                  date:(NSString *)dateStr
                                 venue:(NSString *)venueStr
                           andLocation:(NSString *)locationStr;

+ (void)drawSplashWithBaseColor:(UIColor *)color
                           date:(NSString *)dateStr
                          venue:(NSString *)venueStr
                    andLocation:(NSString *)locationStr;

+ (void)drawCityGlittersWithBaseColor:(UIColor *)color
                                 date:(NSString *)dateStr
                                venue:(NSString *)venueStr
                          andLocation:(NSString *)locationStr;

@end
