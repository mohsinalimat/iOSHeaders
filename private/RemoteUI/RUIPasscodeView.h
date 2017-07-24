//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/CAAnimationDelegate-Protocol.h>
#import <RemoteUI/PSPasscodeFieldDelegate-Protocol.h>
#import <RemoteUI/RUITableFooterDelegate-Protocol.h>
#import <RemoteUI/RUITopLevelPageElement-Protocol.h>

@class NSString, PSPasscodeField, RUIHTMLHeaderElement, RUIHTMLHeaderView, RUIHeaderElement, RUIObjectModel, RUIPage, UIColor, UIScrollView, UITextField, UIView;
@protocol RUIHeader, RemoteUITableFooter;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, PSPasscodeFieldDelegate, CAAnimationDelegate, RUITopLevelPageElement>
{
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    RUIElement *_footer;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    _Bool _appeared;
    unsigned long long _passcodeValidationAttempts;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    NSString *_headerTitle;
    PSPasscodeField *_passcodeField;
    UIColor *_foregroundColor;
    long long _keyboardAppearance;
    unsigned long long _numberOfEntryFields;
    RUIHeaderElement *_header;
    RUIHTMLHeaderElement *_HTMLHeader;
    NSString *_submittedPIN;
}

@property(copy, nonatomic) NSString *submittedPIN; // @synthesize submittedPIN=_submittedPIN;
@property(retain, nonatomic) RUIElement *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) RUIHTMLHeaderElement *HTMLHeader; // @synthesize HTMLHeader=_HTMLHeader;
@property(retain, nonatomic) RUIHeaderElement *header; // @synthesize header=_header;
@property(nonatomic) unsigned long long numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) __weak RUIPage *page; // @synthesize page=_page;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (_Bool)_requiresLocalPasscodeValidation;
- (void)_jiggleView:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_complexPasscodeFieldDidChange:(id)arg1;
- (void)autofillWithToken:(id)arg1;
- (void)_clearPasscode;
- (void)submitPIN;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)footerView;
- (id)HTMLHeaderView;
- (id)headerView;
- (void)viewDidLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)titleLabel;
- (id)subElementWithID:(id)arg1;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (id)passcodeView;
- (id)view;
- (void)_updateFieldSpacer;
- (id)sourceURL;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

