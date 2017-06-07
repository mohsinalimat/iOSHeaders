//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSSecureCoding-Protocol.h>

@interface RCAVState : NSObject <NSSecureCoding, NSCopying>
{
    long long _AVCaptureState;
    long long _AVPreviewState;
}

+ (id)inactiveState;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long AVPreviewState; // @synthesize AVPreviewState=_AVPreviewState;
@property(nonatomic) long long AVCaptureState; // @synthesize AVCaptureState=_AVCaptureState;
- (id)_assetStateByTransitioningItermediateStatesToGoalStates;
- (id)_assetStateByChangingToCaptureState:(long long)arg1 previewState:(long long)arg2;
@property(readonly, nonatomic) _Bool isPreviewActiveOrPreparing;
@property(readonly, nonatomic) _Bool isCaptureActiveOrPreparing;
@property(readonly, nonatomic) _Bool isCaptureActiveOrPreparingOrResumable;
@property(readonly, nonatomic) _Bool isPreviewActive;
@property(readonly, nonatomic) _Bool isPreviewPreparing;
@property(readonly, nonatomic) _Bool isPreviewInactive;
@property(readonly, nonatomic) _Bool isCapturePaused;
@property(readonly, nonatomic) _Bool isCaptureActive;
@property(readonly, nonatomic) _Bool isCapturePreparing;
@property(readonly, nonatomic) _Bool isCaptureInactive;
- (id)assetStateByChangingToPreviewState:(long long)arg1;
- (id)assetStateByChangingToPreviewRate:(float)arg1;
- (id)assetStateByTogglingPreview;
- (id)assetStateByChangingToCaptureState:(long long)arg1;
- (id)assetStateByCaptureState;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

