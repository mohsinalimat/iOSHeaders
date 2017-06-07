//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MusicTableView, UIColor, UIView;

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView
{
    UIView *_bottomHairlineView;
    long long _highlightOrSelectionChangeTransactionsCount;
    UIView *_highlightOverlayView;
    _Bool _lastHighlightOrSelectionChangeWasAnimated;
    UIView *_topHairlineView;
    _Bool _highlighted;
    _Bool _selected;
    _Bool _showsBottomSeparator;
    _Bool _showsTopSeparator;
    UIColor *_separatorColor;
    UIColor *_selectionTintColor;
    struct UIEdgeInsets _musicSeparatorInset;
}

@property(nonatomic) _Bool showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
@property(nonatomic) _Bool showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)_updateBackgroundColorAnimated:(_Bool)arg1;
- (id)_effectiveHighlightOverlayBackgroundColor;
- (void)endHighlightOrSelectionChangeTransaction;
- (void)beginHighlightOrSelectionChangeTransaction;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_musicSeparatorInset;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) MusicTableView *parentTableView;
- (void)setFloating:(_Bool)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
