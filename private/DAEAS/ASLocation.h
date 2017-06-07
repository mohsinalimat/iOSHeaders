//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/NSCoding-Protocol.h>

@class NSString;

@interface ASLocation : ASItem <NSCoding>
{
    NSString *_displayName;
    NSString *_annotation;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_accuracy;
    NSString *_altitude;
    NSString *_altitudeAccuracy;
}

+ (id)locationWithCalLocation:(void *)arg1;
@property(retain, nonatomic) NSString *altitudeAccuracy; // @synthesize altitudeAccuracy=_altitudeAccuracy;
@property(retain, nonatomic) NSString *altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)isEmptyLocation;
- (_Bool)isEqualToLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithApplicationData:(id)arg1;
- (id)initWithCalLocation:(void *)arg1;

@end

