//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGMatchingCommonLocation : NSObject
{
    double _distance;
    NSString *_label;
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _addressCoordinate;
}

+ (id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 forAddressCoordinate:(struct CLLocationCoordinate2D)arg3;
@property(nonatomic) struct CLLocationCoordinate2D addressCoordinate; // @synthesize addressCoordinate=_addressCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (double)distanceBetweenCoordinates;

@end

