//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings
{
    _Bool _easingEnabled;
    _Bool _scaleDuringPlayback;
    _Bool _loopingEnabled;
    _Bool _crossfadeEnabled;
    _Bool _audioEnabled;
    _Bool _playIsSticky;
    _Bool _longExposureVitality;
    _Bool _playDuringHint;
    _Bool _showStateOverlay;
    _Bool _prerollBeforePlaying;
    _Bool _useDedicatedQueues;
    _Bool _allowFrameBlending;
    _Bool _allowVideoPreRoll;
    _Bool _allowPlayerReuse;
    float _vitalityEaseMinRate;
    double _photoTransitionAdjustment;
    double _minimumPhotoTransitionDuration;
    double _minimumColorAdjustedPhotoTransitionDuration;
    double _vitalityEaseDuration;
    long long _startBehavior;
    double _forceTouchTimeoutInterval;
    double _forceTouchTimeoutMinimumProgress;
    double _forceScrubMinimumPressure;
    double _forceScrubMaximumPressure;
    double _forceScrubRewindFactor;
    double _forceScrubMinRateChange;
    double _forceScrubMinimumRate;
    double _forceScrubMaximumInteractiveRate;
    double _audioRampDuration;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double audioRampDuration; // @synthesize audioRampDuration=_audioRampDuration;
@property(nonatomic) double forceScrubMaximumInteractiveRate; // @synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate;
@property(nonatomic) double forceScrubMinimumRate; // @synthesize forceScrubMinimumRate=_forceScrubMinimumRate;
@property(nonatomic) double forceScrubMinRateChange; // @synthesize forceScrubMinRateChange=_forceScrubMinRateChange;
@property(nonatomic) double forceScrubRewindFactor; // @synthesize forceScrubRewindFactor=_forceScrubRewindFactor;
@property(nonatomic) double forceScrubMaximumPressure; // @synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure;
@property(nonatomic) double forceScrubMinimumPressure; // @synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure;
@property(nonatomic) double forceTouchTimeoutMinimumProgress; // @synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress;
@property(nonatomic) double forceTouchTimeoutInterval; // @synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval;
@property(nonatomic) _Bool allowPlayerReuse; // @synthesize allowPlayerReuse=_allowPlayerReuse;
@property(nonatomic) _Bool allowVideoPreRoll; // @synthesize allowVideoPreRoll=_allowVideoPreRoll;
@property(nonatomic) _Bool allowFrameBlending; // @synthesize allowFrameBlending=_allowFrameBlending;
@property(nonatomic) _Bool useDedicatedQueues; // @synthesize useDedicatedQueues=_useDedicatedQueues;
@property(nonatomic) _Bool prerollBeforePlaying; // @synthesize prerollBeforePlaying=_prerollBeforePlaying;
@property(nonatomic) _Bool showStateOverlay; // @synthesize showStateOverlay=_showStateOverlay;
@property(nonatomic) _Bool playDuringHint; // @synthesize playDuringHint=_playDuringHint;
@property(nonatomic) _Bool longExposureVitality; // @synthesize longExposureVitality=_longExposureVitality;
@property(nonatomic) _Bool playIsSticky; // @synthesize playIsSticky=_playIsSticky;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool crossfadeEnabled; // @synthesize crossfadeEnabled=_crossfadeEnabled;
@property(nonatomic) _Bool loopingEnabled; // @synthesize loopingEnabled=_loopingEnabled;
@property(nonatomic) _Bool scaleDuringPlayback; // @synthesize scaleDuringPlayback=_scaleDuringPlayback;
@property(nonatomic) long long startBehavior; // @synthesize startBehavior=_startBehavior;
@property(nonatomic) float vitalityEaseMinRate; // @synthesize vitalityEaseMinRate=_vitalityEaseMinRate;
@property(nonatomic) double vitalityEaseDuration; // @synthesize vitalityEaseDuration=_vitalityEaseDuration;
@property(nonatomic) _Bool easingEnabled; // @synthesize easingEnabled=_easingEnabled;
@property(nonatomic) double minimumColorAdjustedPhotoTransitionDuration; // @synthesize minimumColorAdjustedPhotoTransitionDuration=_minimumColorAdjustedPhotoTransitionDuration;
@property(nonatomic) double minimumPhotoTransitionDuration; // @synthesize minimumPhotoTransitionDuration=_minimumPhotoTransitionDuration;
@property(nonatomic) double photoTransitionAdjustment; // @synthesize photoTransitionAdjustment=_photoTransitionAdjustment;
- (void)setDefaultValues;

@end

