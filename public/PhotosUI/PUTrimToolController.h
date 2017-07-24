//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/PULivePhotoKeyFrameSelectionViewControllerDelegate-Protocol.h>
#import <PhotosUI/PULivePhotoTrimScrubberDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class ISWrappedAVPlayer, NSString, PHLivePhotoView, PLPhotoEditMutableModel, PULivePhotoKeyFrameSelectionViewController, PULivePhotoTrimScrubber, PUPhotoEditSnapStripView, PUPhotoEditValuesCalculator, UIImage, UIView;

@interface PUTrimToolController : UIViewController <ISChangeObserver, PULivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate>
{
    PUPhotoEditSnapStripView *_snapStripView;
    PULivePhotoTrimScrubber *_trimScrubber;
    UIView *_disabledOverlayView;
    _Bool _lastLivePhotoRenderIncludesVisualChanges;
    _Bool _didPerformInitialVideoCompositionUpdate;
    _Bool _disabled;
    _Bool _canEditStillFrameTime;
    PHLivePhotoView *_livePhotoView;
    PLPhotoEditMutableModel *_photoEditModel;
    PUPhotoEditValuesCalculator *_photoEditValuesCalculator;
    id _playerTimeObservationToken;
    double _previouslyOpenedWidth;
    double _minimumTrimDuration;
    ISWrappedAVPlayer *__avPlayer;
    PULivePhotoKeyFrameSelectionViewController *_livePhotoKeyFramePicker;
    CDStruct_1b6d18a9 _unadjustedStillImageTime;
    CDStruct_1b6d18a9 _currentStillFrameTime;
}

@property(nonatomic) __weak PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker; // @synthesize livePhotoKeyFramePicker=_livePhotoKeyFramePicker;
@property(retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *_avPlayer; // @synthesize _avPlayer=__avPlayer;
@property(nonatomic) double minimumTrimDuration; // @synthesize minimumTrimDuration=_minimumTrimDuration;
@property(nonatomic) double previouslyOpenedWidth; // @synthesize previouslyOpenedWidth=_previouslyOpenedWidth;
@property(retain, nonatomic) id playerTimeObservationToken; // @synthesize playerTimeObservationToken=_playerTimeObservationToken;
@property(nonatomic) _Bool canEditStillFrameTime; // @synthesize canEditStillFrameTime=_canEditStillFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 currentStillFrameTime; // @synthesize currentStillFrameTime=_currentStillFrameTime;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) CDStruct_1b6d18a9 unadjustedStillImageTime; // @synthesize unadjustedStillImageTime=_unadjustedStillImageTime;
@property(retain, nonatomic) PUPhotoEditValuesCalculator *photoEditValuesCalculator; // @synthesize photoEditValuesCalculator=_photoEditValuesCalculator;
@property(retain, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(readonly, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
- (void).cxx_destruct;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_livePhotoKeyFramePickerDidDismiss;
- (struct CGRect)_presentationRectFromLoupeRect;
- (void)_resetScrubberToStillPhotoFrame;
- (void)_updateSnapStripView;
- (id)_currentLivePhoto;
- (id)_currentVideoAsset;
- (id)_currentVideoPlayerItem;
- (void)_updateScrubberTimes;
- (void)_updateScrubberContents;
- (void)_updatePassivePlayhead;
- (void)_updateLivePhotoViewTrim;
- (void)_updatePhotoEditModel;
- (void)_avPlayerTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(_Bool)arg3;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (_Bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)livePhotoRenderDidChange:(_Bool)arg1;
- (id)initWithLivePhotoView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

