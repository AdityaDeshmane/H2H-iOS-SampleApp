//
//  H2HModelCustomCollection.h
//  DemoCollectionView
//
//  Created by Pratima.Ghadage on 08/02/17.
//  Copyright © 2017 Pratima.Ghadage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "H2HCustomCollectionViewController.h"

@interface H2HModelCustomCollection : NSObject

-(instancetype)initWithDTOCustomCollection:(H2HDTOCustomCollection *)dtoCustomCollectionObj;

-(void)setVisibleTiles:(NSMutableArray<H2HModelGridTile *> *) arrVisibleTiles;

-(void)reloadCollectionView;

-(UIView *)getCustomCollectionView;

-(void)makeTileFullscreen:(EnumGridTileType) tileType;

-(void)updateGridStyle:(EnumGridStyle)gridStyle;

-(H2HDTOCustomCollection *)getDTOCustomCollection;

-(EnumGridStyle)getCurrrentGridStyle;

-(NSArray<H2HModelGridTile *> *)getArrayOfVisibleTiles;

@end
