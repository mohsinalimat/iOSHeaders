//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MSCLSoundBiteView;

@protocol MSCLSoundBiteViewDelegate <NSObject>

@optional
- (void)soundBiteViewDidTogglePlayback:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidToggleExplicit:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidReleaseRecordButton:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidHoldRecordButton:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewFaceProximityDidEnd:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewFaceProximityDidBegin:(MSCLSoundBiteView *)arg1;
@end

