//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLLocation, INImage, NSString;

@protocol INRideVehicleExport <NSObject, JSExport>
@property(copy, nonatomic) INImage *mapAnnotationImage;
@property(copy, nonatomic) NSString *model;
@property(copy, nonatomic) NSString *manufacturer;
@property(copy, nonatomic) NSString *registrationPlate;
@property(copy, nonatomic) CLLocation *location;
- (id)init;
@end

