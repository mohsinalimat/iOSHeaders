//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater, UIImage;

@interface CKWaveformProgressView : CKBalloonImageView
{
    BOOL _color;
    _Bool _playing;
    _Bool _played;
    double _duration;
    double _currentTime;
    UIImage *_waveform;
    IMManualUpdater *_displayUpdater;
}

@property(retain, nonatomic) IMManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) UIImage *waveform; // @synthesize waveform=_waveform;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)prepareForDisplay;
- (void)setNeedsPrepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

