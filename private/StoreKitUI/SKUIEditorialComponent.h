//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSAttributedString, NSString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent
{
    NSString *_bodyText;
    NSArray *_links;
    long long _maximumBodyLines;
    struct SKUIEditorialStyle _style;
    NSString *_titleText;
    _Bool _usesLockupTitle;
}

@property(readonly, nonatomic, getter=_usesLockupTitle) _Bool _usesLockupTitle; // @synthesize _usesLockupTitle;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) long long maximumBodyLines; // @synthesize maximumBodyLines=_maximumBodyLines;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct SKUIEditorialStyle editorialStyle; // @synthesize editorialStyle=_style;
@property(readonly, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
- (void).cxx_destruct;
- (long long)componentType;
- (void)_setTitleText:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *bodyAttributedText;
- (id)initWithViewElement:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithBrickRoomText:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUILabelViewElement *viewElement; // @dynamic viewElement;

@end

