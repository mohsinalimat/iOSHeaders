//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBUFormAutoCompleteState.h>

@class DOMHTMLInputElement, WebFrame;

@interface WBUFormAutoCompleteStateWK1 : WBUFormAutoCompleteState
{
    DOMHTMLInputElement *_textField;
    WebFrame *_webFrame;
}

@property(readonly, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;
- (void).cxx_destruct;
- (_Bool)shouldOfferActionAutoFillCredentials;
- (id)frame;
- (id)webView;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 clearField:(id)arg3;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2 andFocusFieldAfterFilling:(_Bool)arg3 fieldToFocus:(id)arg4;
- (void)fetchFormMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getTextFieldMetadata:(id *)arg1 formMetadata:(id *)arg2;
- (id)textFieldValue;
- (void)setShowingKeyboardInputView:(_Bool)arg1;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTextField:(id)arg1 webFrame:(id)arg2;

@end

