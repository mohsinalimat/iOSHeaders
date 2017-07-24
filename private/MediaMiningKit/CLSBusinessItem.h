//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class CLCircularRegion, NSArray, NSString;

@interface CLSBusinessItem : NSObject <NSCoding>
{
    _Bool _cached;
    NSString *_name;
    CLCircularRegion *_region;
    NSArray *_categories;
    unsigned long long _muid;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemWithName:(id)arg1 region:(id)arg2 categories:(id)arg3;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool cached; // @synthesize cached=_cached;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3;

@end

