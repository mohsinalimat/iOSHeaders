//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGMailQuoteDissector : SGPipelineDissector
{
    _Bool _paranoid;
}

+ (void)initialize;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)quotedRegionsFrom:(id)arg1 isAOSPMail:(_Bool)arg2;
- (id)_xWrote:(id)arg1 utf8:(const char *)arg2;
- (id)_tofuRegions:(id)arg1 utf8:(const char *)arg2 utf16:(id)arg3 isAOSPMail:(_Bool)arg4;
- (id)initParanoid;

@end

