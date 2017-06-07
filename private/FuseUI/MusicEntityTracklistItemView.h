//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicEntityAbstractLockupView.h>

#import <FuseUI/MPUTextDrawingCacheInvalidationObserver-Protocol.h>
#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>

@class MPUNowPlayingIndicatorView, MusicDownloadProgressButton, MusicEntityViewContentDescriptor, MusicPopularityIndicatorView, NSMapTable, NSMutableArray, NSString, UIButton, UIImageView;
@protocol MusicEntityTracklistItemViewDelegate, MusicEntityValueProviding;

@interface MusicEntityTracklistItemView : MusicEntityAbstractLockupView <MPUTextDrawingCacheInvalidationObserver, MusicEntityContentDescriptorViewConfiguring>
{
    UIButton *_contextualActionsButton;
    MusicDownloadProgressButton *_downloadProgressButton;
    MPUNowPlayingIndicatorView *_indicatorView;
    UIImageView *_mediaTypeImageView;
    UIImageView *_explicitBadgeImageView;
    MusicPopularityIndicatorView *_popularityIndicatorView;
    NSMapTable *_textDescriptorToTextDrawingView;
    NSMutableArray *_textDrawingViewReusePool;
    UIImageView *_trailingAccessoryImageView;
    struct {
        unsigned int didSelectContextualActionsButton:1;
        unsigned int didSelectPlayButton:1;
        unsigned int shouldLayoutAsEditing:1;
    } _delegateRespondsToSelector;
    _Bool _alwaysApplyLeadingTextColumnWidth;
    id <MusicEntityTracklistItemViewDelegate> _delegate;
    double _leadingTextColumnWidth;
    double _trailingTextColumnWidth;
}

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(nonatomic) _Bool alwaysApplyLeadingTextColumnWidth; // @synthesize alwaysApplyLeadingTextColumnWidth=_alwaysApplyLeadingTextColumnWidth;
@property(readonly, nonatomic) UIButton *contextualActionsButton; // @synthesize contextualActionsButton=_contextualActionsButton;
@property(nonatomic) double trailingTextColumnWidth; // @synthesize trailingTextColumnWidth=_trailingTextColumnWidth;
@property(nonatomic) double leadingTextColumnWidth; // @synthesize leadingTextColumnWidth=_leadingTextColumnWidth;
@property(nonatomic) __weak id <MusicEntityTracklistItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewForTextDescriptor:(id)arg1;
- (_Bool)_shouldLayoutAsEditing;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (void)_recycleTextDrawingViewForTextDescriptor:(id)arg1;
- (id)_backgroundColorForTracklistItemSubviews;
- (id)_allTextDescriptorsInTracklistItemContentDescriptor:(id)arg1;
- (void)_contentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (_Bool)_shouldShowPlayButton;
- (_Bool)_shouldEnableArtworkViewUserInteraction;
- (void)_entityDisabledDidChange;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

