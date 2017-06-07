//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCLazyXattrsCollection : NSObject
{
    NSMutableData *_xattrNamesList;
    NSMutableData *_xattrNamesData;
    unsigned int _xattrCount;
    unsigned int _contentXattrCount;
    int _fd;
    long long _sizeLimit;
    long long _cacheSize;
    NSMutableDictionary *_cachedXattrs;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)getXattrValue:(id)arg1 error:(id *)arg2;
- (id)initWithFD:(int)arg1 sizeLimit:(long long)arg2 error:(id *)arg3;
- (unsigned int)contentXattrNamesCount;
- (const char **)contentXattrNamesEnd;
- (const char **)contentXattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)structuralXattrNamesEnd;
- (const char **)structuralXattrNamesBegin;
- (const char **)xattrNamesEnd;
- (unsigned int)xattrNamesCount;
- (const char **)xattrNamesBegin;
- (const char *)xattrNamesListEnd;
- (const char *)xattrNamesListBegin;

@end

