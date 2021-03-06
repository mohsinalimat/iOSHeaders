//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSpeakerModel, NSString;
@protocol CSSpeakerDetectorNDAPIDelegate;

@interface CSSpeakerDetectorNDAPI : NSObject
{
    float _threshold;
    NSString *_languageCode;
    CSSpeakerModel *_spkModel;
    float _retrainTriggerThreshold;
    id <CSSpeakerDetectorNDAPIDelegate> _delegate;
}

@property(nonatomic) __weak id <CSSpeakerDetectorNDAPIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)addLastTriggerToProfile;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2;
- (float)_computeSATScore:(id)arg1;
- (void)processSuperVector:(id)arg1 withResult:(id)arg2;
- (_Bool)_initializeSAT:(id)arg1;
- (_Bool)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (void)dealloc;
- (void)reset;
- (id)initWithAsset:(id)arg1 languageCode:(id)arg2 speakerModel:(id)arg3;

@end

