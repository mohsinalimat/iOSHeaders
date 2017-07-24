//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKActionMenuControllerDelegate-Protocol.h>
#import <ChatKit/CKActionMenuGestureRecognizerButtonDelegate-Protocol.h>
#import <ChatKit/CKAudioRecorderDelegate-Protocol.h>
#import <ChatKit/CKBrowserSwitcherFooterViewDelegate-Protocol.h>
#import <ChatKit/CKInlineAudioReplyButtonDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryContentViewDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryRecordedAudioViewDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryViewStyleProtocol-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/_UIBackdropViewGraphicsQualityChangeDelegate-Protocol.h>

@class CAMShutterButton, CKActionMenuController, CKActionMenuGestureRecognizerButton, CKAudioRecorder, CKBrowserSwitcherFooterView, CKComposition, CKConversation, CKEntryViewButton, CKInlineAudioReplyButtonController, CKMessageEntryAudioHintView, CKMessageEntryContentView, CKMessageEntryRecordedAudioView, CKMessageEntryWaveformView, CKScheduledUpdater, NSArray, NSString, UIInputContextHistory, UILabel, UILongPressGestureRecognizer, UIPreviewInteraction, _UIBackdropView;
@protocol CKMessageEntryViewDelegate><UIPreviewInteractionDelegate, CKMessageEntryViewInputDelegate, UIPreviewInteractionDelegate;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKActionMenuControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKInlineAudioReplyButtonDelegate, UIGestureRecognizerDelegate, _UIBackdropViewGraphicsQualityChangeDelegate, CKBrowserSwitcherFooterViewDelegate, CKMessageEntryViewStyleProtocol>
{
    _Bool _shouldShowSendButton;
    _Bool _shouldShowSubject;
    _Bool _shouldShowPluginButtons;
    _Bool _shouldShowCharacterCount;
    _Bool _shouldKnockoutCoverView;
    _Bool _keyboardVisible;
    _Bool _entryFieldCollapsed;
    _Bool _showAppStrip;
    _Bool _disablePluginButtons;
    _Bool _composingRecipient;
    _Bool _failedRecipients;
    _Bool _unreachableEmergencyRecipient;
    _Bool _sendingMessage;
    _Bool _characterCountHidden;
    _Bool _shouldCenterCharacterCount;
    _Bool _shouldAllowImpactSend;
    _Bool _shouldConfigureForFullscreenAppView;
    _Bool _performingActionMenuSend;
    _Bool _animatingLayoutChange;
    _Bool _entryFieldUpdaterCollapsedValue;
    _Bool _entryFieldUpdaterAnimatedValue;
    NSArray *_keyCommands;
    long long _style;
    id <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> _delegate;
    id <UIPreviewInteractionDelegate> _previewInteractionDelegate;
    id <CKMessageEntryViewInputDelegate> _inputDelegate;
    CKConversation *_conversation;
    CKMessageEntryContentView *_contentView;
    CKMessageEntryWaveformView *_waveformView;
    CKEntryViewButton *_photoButton;
    CKEntryViewButton *_sendButton;
    UIView *_inputButtonContainerView;
    CKEntryViewButton *_browserButton;
    CKEntryViewButton *_arrowButton;
    UILongPressGestureRecognizer *_sendButtonLongPressGestureRecognizer;
    UIPreviewInteraction *_sendButtonPreviewInteraction;
    CKEntryViewButton *_audioButton;
    CKActionMenuGestureRecognizerButton *_audioActionMenuGestureRecognizerButton;
    CKInlineAudioReplyButtonController *_audioReplyButton;
    UILabel *_characterCountLabel;
    _UIBackdropView *_backdropView;
    UIView *_knockoutCoverView;
    CKAudioRecorder *_recorder;
    CKComposition *_audioComposition;
    CKActionMenuController *_audioActionMenuController;
    CKMessageEntryRecordedAudioView *_recordedAudioView;
    CKMessageEntryAudioHintView *_audioHintView;
    unsigned long long _displayMode;
    UIView *_contentClipView;
    UIInputContextHistory *_inputContextHistory;
    UILabel *_collpasedPlaceholderLabel;
    CKBrowserSwitcherFooterView *_appStrip;
    CAMShutterButton *_shutterButton;
    CKScheduledUpdater *_entryFieldCollapsedUpdater;
    struct CGSize _inputButtonSize;
    struct CGSize _sendButtonSize;
    struct CGSize _characterCountSize;
    struct CGSize _waveformViewSize;
    struct UIEdgeInsets _marginInsets;
    struct UIEdgeInsets _coverInsets;
    struct CGRect _audioActionMenuFrame;
}

+ (id)audioButtonImage;
+ (struct UIEdgeInsets)contentViewInsetsForMarginInsets:(struct UIEdgeInsets)arg1 shouldShowPluginButtons:(_Bool)arg2 shouldShowCharacterCount:(_Bool)arg3 shouldCoverSendButton:(_Bool)arg4;
+ (struct UIEdgeInsets)coverViewInsetsForMarginInsets:(struct UIEdgeInsets)arg1 shouldShowPluginButtons:(_Bool)arg2 shouldShowCharacterCount:(_Bool)arg3;
+ (struct UIEdgeInsets)coverViewInsetsForMarginInsets:(struct UIEdgeInsets)arg1 shouldShowPluginButtons:(_Bool)arg2 shouldShowCharacterCount:(_Bool)arg3 shouldCenterCharacterCount:(_Bool *)arg4;
+ (id)sharedAppStripDatasource;
+ (id)_imageNamesForPrecaching;
@property(nonatomic) _Bool entryFieldUpdaterAnimatedValue; // @synthesize entryFieldUpdaterAnimatedValue=_entryFieldUpdaterAnimatedValue;
@property(nonatomic) _Bool entryFieldUpdaterCollapsedValue; // @synthesize entryFieldUpdaterCollapsedValue=_entryFieldUpdaterCollapsedValue;
@property(retain, nonatomic) CKScheduledUpdater *entryFieldCollapsedUpdater; // @synthesize entryFieldCollapsedUpdater=_entryFieldCollapsedUpdater;
@property(retain, nonatomic) CAMShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(retain, nonatomic) CKBrowserSwitcherFooterView *appStrip; // @synthesize appStrip=_appStrip;
@property(retain, nonatomic) UILabel *collpasedPlaceholderLabel; // @synthesize collpasedPlaceholderLabel=_collpasedPlaceholderLabel;
@property(nonatomic) _Bool animatingLayoutChange; // @synthesize animatingLayoutChange=_animatingLayoutChange;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory; // @synthesize inputContextHistory=_inputContextHistory;
@property(nonatomic, getter=isPerformingActionMenuSend) _Bool performingActionMenuSend; // @synthesize performingActionMenuSend=_performingActionMenuSend;
@property(retain, nonatomic) UIView *contentClipView; // @synthesize contentClipView=_contentClipView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) CKMessageEntryAudioHintView *audioHintView; // @synthesize audioHintView=_audioHintView;
@property(nonatomic) struct CGSize waveformViewSize; // @synthesize waveformViewSize=_waveformViewSize;
@property(retain, nonatomic) CKMessageEntryRecordedAudioView *recordedAudioView; // @synthesize recordedAudioView=_recordedAudioView;
@property(nonatomic) struct CGRect audioActionMenuFrame; // @synthesize audioActionMenuFrame=_audioActionMenuFrame;
@property(retain, nonatomic) CKActionMenuController *audioActionMenuController; // @synthesize audioActionMenuController=_audioActionMenuController;
@property(retain, nonatomic) CKComposition *audioComposition; // @synthesize audioComposition=_audioComposition;
@property(retain, nonatomic) CKAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool shouldConfigureForFullscreenAppView; // @synthesize shouldConfigureForFullscreenAppView=_shouldConfigureForFullscreenAppView;
@property(nonatomic) _Bool shouldAllowImpactSend; // @synthesize shouldAllowImpactSend=_shouldAllowImpactSend;
@property(nonatomic) _Bool shouldCenterCharacterCount; // @synthesize shouldCenterCharacterCount=_shouldCenterCharacterCount;
@property(nonatomic, getter=isCharacterCountHidden) _Bool characterCountHidden; // @synthesize characterCountHidden=_characterCountHidden;
@property(retain, nonatomic) UIView *knockoutCoverView; // @synthesize knockoutCoverView=_knockoutCoverView;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) struct CGSize characterCountSize; // @synthesize characterCountSize=_characterCountSize;
@property(nonatomic) struct CGSize sendButtonSize; // @synthesize sendButtonSize=_sendButtonSize;
@property(nonatomic) struct CGSize inputButtonSize; // @synthesize inputButtonSize=_inputButtonSize;
@property(retain, nonatomic) UILabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(retain, nonatomic) CKInlineAudioReplyButtonController *audioReplyButton; // @synthesize audioReplyButton=_audioReplyButton;
@property(retain, nonatomic) CKActionMenuGestureRecognizerButton *audioActionMenuGestureRecognizerButton; // @synthesize audioActionMenuGestureRecognizerButton=_audioActionMenuGestureRecognizerButton;
@property(retain, nonatomic) CKEntryViewButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UIPreviewInteraction *sendButtonPreviewInteraction; // @synthesize sendButtonPreviewInteraction=_sendButtonPreviewInteraction;
@property(retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGestureRecognizer; // @synthesize sendButtonLongPressGestureRecognizer=_sendButtonLongPressGestureRecognizer;
@property(retain, nonatomic) CKEntryViewButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CKEntryViewButton *browserButton; // @synthesize browserButton=_browserButton;
@property(retain, nonatomic) UIView *inputButtonContainerView; // @synthesize inputButtonContainerView=_inputButtonContainerView;
@property(nonatomic, getter=isSendingMessage) _Bool sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(nonatomic, getter=hasUnreachableEmergencyRecipient) _Bool unreachableEmergencyRecipient; // @synthesize unreachableEmergencyRecipient=_unreachableEmergencyRecipient;
@property(nonatomic, getter=hasFailedRecipients) _Bool failedRecipients; // @synthesize failedRecipients=_failedRecipients;
@property(nonatomic, getter=isComposingRecipient) _Bool composingRecipient; // @synthesize composingRecipient=_composingRecipient;
@property(nonatomic, getter=shouldDisablePluginButtons) _Bool disablePluginButtons; // @synthesize disablePluginButtons=_disablePluginButtons;
@property(nonatomic, getter=shouldShowAppStrip) _Bool showAppStrip; // @synthesize showAppStrip=_showAppStrip;
@property(nonatomic) _Bool entryFieldCollapsed; // @synthesize entryFieldCollapsed=_entryFieldCollapsed;
@property(nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) _Bool shouldKnockoutCoverView; // @synthesize shouldKnockoutCoverView=_shouldKnockoutCoverView;
@property(retain, nonatomic) CKEntryViewButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) CKEntryViewButton *photoButton; // @synthesize photoButton=_photoButton;
@property(retain, nonatomic) CKMessageEntryWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(retain, nonatomic) CKMessageEntryContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak id <CKMessageEntryViewInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> previewInteractionDelegate; // @synthesize previewInteractionDelegate=_previewInteractionDelegate;
@property(nonatomic) __weak id <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowCharacterCount; // @synthesize shouldShowCharacterCount=_shouldShowCharacterCount;
@property(nonatomic) _Bool shouldShowPluginButtons; // @synthesize shouldShowPluginButtons=_shouldShowPluginButtons;
@property(nonatomic) _Bool shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
@property(nonatomic) _Bool shouldShowSendButton; // @synthesize shouldShowSendButton=_shouldShowSendButton;
@property(nonatomic) struct UIEdgeInsets coverInsets; // @synthesize coverInsets=_coverInsets;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
- (void).cxx_destruct;
- (void)sendCurrentLocationMessage;
- (void)sendButtonLongPressGesture:(id)arg1;
- (void)loadRecordedAudioViewsIfNeeded;
- (_Bool)pluginButtonsEnabled;
- (_Bool)sendButtonEnabled;
- (void)_initializeInputContextHistory;
- (void)_addMessageToInputContextHistory:(id)arg1;
- (void)_participantsDidChange:(id)arg1;
- (BOOL)_sendButtonColor;
- (_Bool)_isSURFInShelf;
- (void)updateEntryView;
- (_Bool)shouldRecordForService:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)keyCommandSend:(id)arg1;
- (void)stopRecordingForRaiseGestureWithFailure:(_Bool)arg1;
- (void)startRecordingForRaiseGesture;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)cancelRecordingAndShowAudioHint;
- (void)presentAudioActionMenu;
- (void)sendMenuItemAction:(id)arg1;
- (void)configureAudioActionMenuControllerForPlayback:(_Bool)arg1;
- (void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)playMenuItemAction:(id)arg1;
- (void)pauseMenuItemAction:(id)arg1;
- (void)audioMenuItemAction:(id)arg1;
- (void)_setupWaveformView;
- (double)_accessoryViewFadeDuration;
- (void)collapsedPlaceholderLabelTapped:(id)arg1;
- (void)arrowButtonTapped:(id)arg1;
- (void)browserButtonTapped:(id)arg1;
- (void)photoButtonTapped:(id)arg1;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)actionMenuControllerDidDismissActionMenu:(id)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(_Bool)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(id)arg1 animated:(_Bool)arg2;
- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidFail:(id)arg1;
- (void)audioRecorderRecordingDidChange:(id)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(_Bool)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (_Bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (struct CGSize)messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
- (_Bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;
- (void)_animateToCompactLayoutCollapsing:(_Bool)arg1;
- (_Bool)_shouldNotAnimateCollapseInteractive;
- (void)collapseGestureRecognized;
- (void)expandGestureRecongnized;
- (void)_animateExpand;
- (struct UIEdgeInsets)adjustedCoverInsets;
- (void)_updateUIForEntryFieldCollapsedStateChange;
- (void)endDeferringEntryFieldCollapsedStateChanges;
- (void)beginDeferringEntryFieldCollapsedStateChanges;
- (struct CGRect)browserButtonFrame;
- (id)snapshotForCompactBrowserAnimation;
- (id)pasteBoardTextFromComposition:(id)arg1;
- (void)setEntryFieldCollapsed:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool shouldEntryViewBeExpandedLayout;
- (_Bool)layoutIsCurrentlyCompact;
@property(readonly, nonatomic) _Bool hasRecording;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)dismissAudioActionMenuAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isAudioActionMenuVisible;
@property(readonly, nonatomic) CKComposition *compositionWithAcceptedAutocorrection;
@property(retain, nonatomic) CKComposition *composition;
@property(nonatomic) _Bool shouldHideBackgroundView; // @dynamic shouldHideBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldAllowImpact:(_Bool)arg3 shouldShowSendButton:(_Bool)arg4 shouldShowSubject:(_Bool)arg5 shouldShowPluginButtons:(_Bool)arg6 shouldShowCharacterCount:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowSendButton:(_Bool)arg3 shouldShowSubject:(_Bool)arg4 shouldShowPluginButtons:(_Bool)arg5 shouldShowCharacterCount:(_Bool)arg6;
- (id)initForFullscreenAppViewWithFrame:(struct CGRect)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldAllowImpact:(_Bool)arg3 shouldShowSendButton:(_Bool)arg4 shouldShowSubject:(_Bool)arg5 shouldShowBrowserButton:(_Bool)arg6 shouldShowCharacterCount:(_Bool)arg7;
- (struct CGPoint)sendButtonConvertPointToScreen:(struct CGPoint)arg1;
- (struct CGRect)sendButtonFrameInScreenCoordinates;
@property(readonly) double coverViewWidth;
- (double)placeholderHeight;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)coverFrameThatFitsInSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureForDisplayMode:(unsigned long long)arg1;
- (void)updateTextViewsForShouldHideCaret:(_Bool)arg1;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (double)appStripHeight;
- (double)bottomInsetForAppStrip;
- (void)updateAppStripFrame;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

