//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TSKAnnotation;

__attribute__((visibility("hidden")))
@interface TSAAnnotationReference : NSObject
{
    id <TSKAnnotation> _annotation;
    unsigned long long _pageIndex;
}

@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=_annotation;
- (_Bool)referencesAnnotation:(id)arg1;
- (void)dealloc;

@end

