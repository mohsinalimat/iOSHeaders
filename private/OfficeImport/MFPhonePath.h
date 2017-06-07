//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhonePath : MFPath
{
    OITSUBezierPath *m_path;
    int m_state;
}

- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (id)getBezierPath;
- (int)fill:(id)arg1;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;
- (int)flatten;
- (int)closeFigure;
- (struct CGPoint)currentPoint;
- (int)abort;
- (int)end;
- (int)begin;
- (_Bool)isOpen;
- (int)state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (id)init;

@end

