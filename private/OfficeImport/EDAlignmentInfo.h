//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject>
{
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    _Bool mTextWrapped;
    _Bool mHorizontalAlignOverridden;
    _Bool mVerticalAlignOverridden;
    _Bool mIndentOverridden;
    _Bool mTextWrappedOveridden;
    _Bool mDoNotModify;
}

+ (id)alignmentInfo;
@property(readonly, copy) NSString *description;
- (void)setDoNotModify:(_Bool)arg1;
- (void)setTextRotation:(int)arg1;
- (int)textRotation;
- (void)setTextWrapped:(_Bool)arg1;
- (_Bool)isTextWrapped;
- (_Bool)isTextWrappedOverridden;
- (void)setIndent:(int)arg1;
- (int)indent;
- (_Bool)isIndentOverridden;
- (void)setVerticalAlignment:(int)arg1;
- (int)verticalAlignment;
- (_Bool)isVerticalAlignOverridden;
- (void)setHorizontalAlignment:(int)arg1;
- (int)horizontalAlignment;
- (_Bool)isHorizontalAlignOverridden;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAlignmentInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

