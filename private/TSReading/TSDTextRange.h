//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextRange.h>

@interface TSDTextRange : UITextRange
{
    struct _NSRange _range;
    _Bool _eolAffinity;
    float _preferredStartPosition;
    float _preferredEndPosition;
}

+ (id)textRangeWithRange:(struct _NSRange)arg1 eolAffinity:(_Bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
+ (id)textRangeWithRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) float preferredEndPosition; // @synthesize preferredEndPosition=_preferredEndPosition;
@property(readonly, nonatomic) float preferredStartPosition; // @synthesize preferredStartPosition=_preferredStartPosition;
@property(nonatomic) _Bool isAtEndOfLine; // @synthesize isAtEndOfLine=_eolAffinity;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)end;
- (id)start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1 eolAffinity:(_Bool)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
- (id)initWithRange:(struct _NSRange)arg1;

@end

