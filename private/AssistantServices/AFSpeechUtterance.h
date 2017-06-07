//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>
{
    NSArray *_interpretationIndices;
    long long _confidenceScore;
    long long _source;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
- (void).cxx_destruct;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

