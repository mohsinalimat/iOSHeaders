//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPSDLayoutMetricsChannel : NSObject
{
    struct CGRect _edgeInsets;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGRect edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)setEdgeInsets:(struct CGRect)arg1;
- (id)initWithEdgeInsets:(struct CGRect)arg1;
- (void)sanitizeEdgeInsets;
- (void)dealloc;

@end

