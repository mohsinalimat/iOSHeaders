//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject
{
    NSMutableDictionary *_cachedLexicons;
}

- (void).cxx_destruct;
- (struct _LXLexicon *)_lexiconForLocale:(id)arg1;
- (_Bool)textExistsInLexicon:(id)arg1 withLocale:(id)arg2;
- (_Bool)lexiconExistsForLocale:(id)arg1;
- (id)init;
- (const void *)_opaqueLexiconForLocale:(id)arg1;

@end

