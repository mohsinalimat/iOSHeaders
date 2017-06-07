//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPTextDelegate-Protocol.h>

@class TSULocale, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    int mVerticalAlignment;
    double mMaxWidthForChildren;
    TSULocale *mLocale;
}

@property(readonly, nonatomic) TSULocale *locale; // @synthesize locale=mLocale;
@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=mMaxWidthForChildren;
- (_Bool)forceWesternLineBreaking;
- (int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(int)arg2 locale:(id)arg3;

@end

