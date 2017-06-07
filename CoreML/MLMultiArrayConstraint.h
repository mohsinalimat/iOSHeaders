//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>

@class NSArray;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    NSArray *_shape;
    long long _dataType;
}

+ (id)constraintWithShape:(id)arg1 dataType:(long long)arg2;
@property(readonly) long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSArray *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (_Bool)isAllowedDataType:(long long)arg1 error:(id *)arg2;
- (_Bool)isAllowedShape:(id)arg1 error:(id *)arg2;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2;

@end
