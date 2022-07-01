solarsys = ['태양', '수성', '금성', '지구', '화성', '목성', '토성', '천왕성', '해와성', '지구']
planet = '지구'
pos = solarsys.index(planet)
print(pos)

# 5 이상부터 검색
pos = solarsys.index(planet, 5)
print(pos)
