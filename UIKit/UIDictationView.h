//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/SUICFlamesViewDelegate-Protocol.h>

@class NSString, SUICFlamesView, UIButton, UIKeyboardDicationBackground;
@protocol UIDictationViewDisplayDelegate;

@interface UIDictationView : UIView <SUICFlamesViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    _Bool _keyboardInTransition;
    _Bool _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
    id <UIDictationViewDisplayDelegate> _displayDelegate;
}

+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
@property(nonatomic) id <UIDictationViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (float)audioLevelForFlamesView:(id)arg1;
- (_Bool)visible;
- (void)endpointButtonPressed;
- (void)dealloc;
- (_Bool)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(int)arg1;
- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (struct CGPoint)positionForShow;
- (void)show;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (id)endpointButton;
- (void)highlightEndpointButton;
- (void)applicationWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
