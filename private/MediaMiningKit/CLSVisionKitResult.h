//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSString;

@interface CLSVisionKitResult : NSObject <NSCoding>
{
    NSString *_value;
    double _confidence;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 confidence:(double)arg2;

@end
