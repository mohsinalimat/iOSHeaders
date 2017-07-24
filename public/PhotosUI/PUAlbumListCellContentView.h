//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UITextFieldDelegate-Protocol.h>

@class NSString, PUStackView, PXUIButton, UIFont, UILabel, UITextField;
@protocol PUAlbumListCellDelegate;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate>
{
    _Bool _combinesPhotoDecorations;
    _Bool _editing;
    _Bool _enabled;
    _Bool _showsDeleteButtonWhenEditing;
    _Bool _highlighted;
    _Bool __showsTitleAndSubtitle;
    id <PUAlbumListCellDelegate> _delegate;
    PUStackView *_stackView;
    UIView *_customImageView;
    NSString *_title;
    NSString *_subtitle;
    double _xInset;
    long long _layout;
    unsigned long long _editCapabilities;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UITextField *__titleTextField;
    UILabel *__subtitleLabel;
    PXUIButton *__deleteButton;
}

@property(retain, nonatomic, setter=_setDeleteButton:) PXUIButton *_deleteButton; // @synthesize _deleteButton=__deleteButton;
@property(retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property(retain, nonatomic, setter=_setTitleTextField:) UITextField *_titleTextField; // @synthesize _titleTextField=__titleTextField;
@property(nonatomic, setter=_setShowsTitleAndSubtitle:) _Bool _showsTitleAndSubtitle; // @synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool showsDeleteButtonWhenEditing; // @synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long editCapabilities; // @synthesize editCapabilities=_editCapabilities;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(nonatomic) double xInset; // @synthesize xInset=_xInset;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *customImageView; // @synthesize customImageView=_customImageView;
@property(nonatomic) _Bool combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property(retain, nonatomic, setter=_setStackView:) PUStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PUAlbumListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSubtitleLabelStyle;
- (void)_updateTitleTextFieldsStyle;
- (void)_deleteAction:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)cancelPerformRetitleAction;
- (void)_updateSubtitleLabelAnimated:(_Bool)arg1;
- (void)_updateTitleFieldAnimated:(_Bool)arg1;
- (double)_titleFieldAlpha;
- (long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1;
- (void)_updateStackViewAnimated:(_Bool)arg1;
- (void)_updateDeleteButtonAnimated:(_Bool)arg1;
- (void)_updateSubviewOrdering;
- (void)setEditCapabilities:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setShowsTitle:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGPoint)_deleteButtonCenter;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

