//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (void).cxx_destruct;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;
- (void)addFormat:(id)arg1 locale:(id)arg2;
- (id)formatStrings;
- (unsigned short)separator;
- (id)initWithSeparator:(unsigned short)arg1;

@end

