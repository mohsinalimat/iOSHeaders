//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSMutableArray, _CDPModelTuningState, _CDPSimpleModelParameterManagerTuningValue;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>
{
    _CDPSimpleModelParameterManagerTuningValue *_previousBestTuningValue;
    NSMutableArray *_tuningValues;
    _CDPModelTuningState *_lastTuningState;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) _CDPModelTuningState *lastTuningState; // @synthesize lastTuningState=_lastTuningState;
@property(retain, nonatomic) NSMutableArray *tuningValues; // @synthesize tuningValues=_tuningValues;
@property(retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue; // @synthesize previousBestTuningValue=_previousBestTuningValue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

