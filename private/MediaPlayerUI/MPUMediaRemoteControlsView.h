//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUChronologicalProgressView, MPUMediaControlsVolumeView, MPUNowPlayingMetadata, MPUTransportControlsView, NSString, UIImage;

@interface MPUMediaRemoteControlsView : UIView
{
    _Bool _timeViewVisible;
    UIImage *_artworkImage;
    MPUNowPlayingMetadata *_nowPlayingMetadata;
    NSString *_nowPlayingAppDisplayID;
    MPUChronologicalProgressView *_timeView;
    MPUTransportControlsView *_transportControls;
    MPUMediaControlsVolumeView *_volumeView;
}

@property(readonly, nonatomic) MPUMediaControlsVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(readonly, nonatomic) MPUTransportControlsView *transportControls; // @synthesize transportControls=_transportControls;
@property(readonly, nonatomic) MPUChronologicalProgressView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) _Bool timeViewVisible; // @synthesize timeViewVisible=_timeViewVisible;
@property(retain, nonatomic) NSString *nowPlayingAppDisplayID; // @synthesize nowPlayingAppDisplayID=_nowPlayingAppDisplayID;
@property(retain, nonatomic) MPUNowPlayingMetadata *nowPlayingMetadata; // @synthesize nowPlayingMetadata=_nowPlayingMetadata;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

