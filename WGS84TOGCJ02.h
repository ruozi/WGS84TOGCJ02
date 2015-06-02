//
//  WGS84TOGCJ02.h
//  Launcher
//
//  Created by Ruozi on 15/6/1.
//  Copyright (c) 2015年 Pinssible. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface WGS84TOGCJ02 : NSObject

+ (BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;

+ (CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;

@end
