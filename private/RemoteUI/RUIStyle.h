//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface RUIStyle : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_radioGroupSelectedColor;
    UIColor *_buttonRowTextColor;
    UIColor *_labelRowTextColor;
    UIColor *_selectPageDetailTextColor;
    UIColor *_titleLabelTextColor;
    UIColor *_headerLabelTextColor;
    UIColor *_subHeaderLabelTextColor;
    UIColor *_detailHeaderLabelTextColor;
    UIColor *_footerLabelTextColor;
    UIColor *_focusedRowTextColor;
    long long _labelRowTextAlignment;
    long long _headerLabelAlignment;
    long long _subHeaderLabelAlignment;
    long long _footerLabelAlignment;
    long long _footerLinkAlignment;
    UIColor *_tintColor;
}

+ (id)frontRowStyle;
+ (id)setupAssistantModalStyle;
+ (id)setupAssistantStyle;
+ (id)defaultStyle;
+ (id)sharedInstance;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long footerLinkAlignment; // @synthesize footerLinkAlignment=_footerLinkAlignment;
@property(nonatomic) long long footerLabelAlignment; // @synthesize footerLabelAlignment=_footerLabelAlignment;
@property(nonatomic) long long subHeaderLabelAlignment; // @synthesize subHeaderLabelAlignment=_subHeaderLabelAlignment;
@property(nonatomic) long long headerLabelAlignment; // @synthesize headerLabelAlignment=_headerLabelAlignment;
@property(nonatomic) long long labelRowTextAlignment; // @synthesize labelRowTextAlignment=_labelRowTextAlignment;
@property(retain, nonatomic) UIColor *focusedRowTextColor; // @synthesize focusedRowTextColor=_focusedRowTextColor;
@property(retain, nonatomic) UIColor *footerLabelTextColor; // @synthesize footerLabelTextColor=_footerLabelTextColor;
@property(retain, nonatomic) UIColor *detailHeaderLabelTextColor; // @synthesize detailHeaderLabelTextColor=_detailHeaderLabelTextColor;
@property(retain, nonatomic) UIColor *subHeaderLabelTextColor; // @synthesize subHeaderLabelTextColor=_subHeaderLabelTextColor;
@property(retain, nonatomic) UIColor *headerLabelTextColor; // @synthesize headerLabelTextColor=_headerLabelTextColor;
@property(retain, nonatomic) UIColor *titleLabelTextColor; // @synthesize titleLabelTextColor=_titleLabelTextColor;
@property(retain, nonatomic) UIColor *selectPageDetailTextColor; // @synthesize selectPageDetailTextColor=_selectPageDetailTextColor;
@property(retain, nonatomic) UIColor *labelRowTextColor; // @synthesize labelRowTextColor=_labelRowTextColor;
@property(retain, nonatomic) UIColor *buttonRowTextColor; // @synthesize buttonRowTextColor=_buttonRowTextColor;
@property(retain, nonatomic) UIColor *radioGroupSelectedColor; // @synthesize radioGroupSelectedColor=_radioGroupSelectedColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;
- (void)applyToNavigationController:(id)arg1;
- (void)applyToObjectModel:(id)arg1;
- (void)applyToLabel:(id)arg1;
@property(readonly, nonatomic) long long navBarActivityIndicatorStyle;

@end

