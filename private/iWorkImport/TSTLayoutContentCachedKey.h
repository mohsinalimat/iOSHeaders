//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTLayoutContentCachedKey : NSObject <NSCopying>
{
    NSString *mString;
    double mWidth;
    double mHeight;
    TSWPParagraphStyle *mParagraphStyle;
    _Bool mCellWraps;
    int mValueType;
    struct UIEdgeInsets mPaddingInsets;
    int mVerticalAlignment;
    int mWritingDirection;
}

@property(readonly, nonatomic) int writingDirection; // @synthesize writingDirection=mWritingDirection;
@property(readonly, nonatomic) int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;
@property(readonly, nonatomic) struct UIEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;
@property(readonly, nonatomic) int valueType; // @synthesize valueType=mValueType;
@property(readonly, nonatomic) _Bool cellWraps; // @synthesize cellWraps=mCellWraps;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (id)description;
- (_Bool)isEqualToLayoutContentCachedKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(_Bool)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets)arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;

@end

