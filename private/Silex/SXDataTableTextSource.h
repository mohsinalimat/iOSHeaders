//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXTextSource.h>

@class SXFormattedText;

@interface SXDataTableTextSource : SXTextSource
{
    SXFormattedText *_formattedText;
    unsigned long long _defaultTextAlignment;
    CDStruct_2fea82da _indexPath;
}

@property(nonatomic) unsigned long long defaultTextAlignment; // @synthesize defaultTextAlignment=_defaultTextAlignment;
@property(readonly, nonatomic) CDStruct_2fea82da indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) SXFormattedText *formattedText; // @synthesize formattedText=_formattedText;
- (void).cxx_destruct;
- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (id)initWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;

@end

