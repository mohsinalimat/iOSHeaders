//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

@interface AVPlayerItem (RCAdditions)
- (double)_rawDurationInSeconds;
@property(readonly, nonatomic) _Bool rc_isDurationAvailable;
@property(readonly, nonatomic) double rc_durationInSeconds;
@property(nonatomic, setter=rc_setPreviewTimeRange:) CDStruct_73a5d3ca rc_previewTimeRange;
@property(readonly, nonatomic) CDStruct_73a5d3ca rc_playableTimeRange;
@end

