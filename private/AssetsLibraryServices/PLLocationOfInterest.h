//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation;

@interface PLLocationOfInterest : NSObject
{
    long long _type;
    CLLocation *_location;
    double _radius;
}

+ (id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)dealloc;
- (id)description;
- (id)_descriptionType;

@end
