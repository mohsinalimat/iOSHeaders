//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/MPSNNPadding-Protocol.h>

@class NSString;

@interface MPSNNDefaultPadding : NSObject <MPSNNPadding>
{
    unsigned long long _method;
    _Bool _mpsOwned;
}

+ (_Bool)supportsSecureCoding;
+ (id)paddingForTensorflowAveragePooling;
+ (id)paddingWithMethod:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPaddingMethod:(unsigned long long)arg1;
- (unsigned long long)paddingMethod;
- (id)label;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

