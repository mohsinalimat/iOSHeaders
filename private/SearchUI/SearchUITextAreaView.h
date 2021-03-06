//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSMutableArray, NSString, SearchUITitleContainerView, UILabel;

@interface SearchUITextAreaView : TLKStackView <NUIContainerStackViewDelegate>
{
    unsigned long long _style;
    SearchUITitleContainerView *_titleContainer;
    NSMutableArray *_richTextFields;
    UILabel *_footnoteLabel;
}

+ (id)footNoteLabelFont;
@property(retain) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain) NSMutableArray *richTextFields; // @synthesize richTextFields=_richTextFields;
@property(retain) SearchUITitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (_Bool)noFootNote;
- (_Bool)noRichTextFields;
- (void)updateWithResult:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

