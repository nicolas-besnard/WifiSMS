/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDCharacterRun;



@interface WDNote : WDRun 
{
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}


- (id)text;
- (id)reference;
- (BOOL)automaticNumbering;
- (void)setAutomaticNumbering:(BOOL)arg1;
- (NSInteger)runType;
- (id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2;
- (void)dealloc;

@end
