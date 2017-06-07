//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, NSString;

@interface FMFMapImageRequest : NSObject <NSSecureCoding>
{
    _Bool _cachingEnabled;
    CLLocation *_location;
    double _altitude;
    double _pitch;
    double _width;
    double _height;
    long long _priority;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(_Bool)arg6;

@end

