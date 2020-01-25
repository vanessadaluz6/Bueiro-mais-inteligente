# Bueiro+ inteligente
Aplicação de Iot com a framework Qt, e o microcontrolador ESP8266.

## O que é o Bueiro+ inteligente?

  Nos períodos de chuva,o escoamento da água nas ruas se torna um problema, devido a falta de conscientização e má gestão da sociedade em relação ao descarte irregular do lixo, o que resulta na obstrução dos bueiros das cidades, aumentando o risco de alagamentos e enchentes.
  
  Por este motivo, em algumas cidades foram colocados uma espécie de rede nos bueiros, onde o lixo fica retido até que a coleta o recolha. Porém, hoje, o conceito 'Internet das coisas' nos possibilita conectar dispositivos de sistemas e serviços ao favor da humanidade. Com isso, surgiu o Bueiro+ Inteligente, o qual além da rede que retém os resíduos, ele contém um monitoramento através de sensores de carga e nível, ligados na Web para que juntos, emitam um sinal do tempo adequado e específico de cada bueiro, quando o limite de capacidade vem sendo atingido para que a equipe de agentes de limpeza possa esvaziá-las.
  
   A iniciativa além de evitar enchentes, é um ganho ambiental pois ao reter o resíduo sólido, impede que ele corra para os rios. A sustentabilidade é um ponto importante a ser citado, já que cerca de 40% do lixo retirado dos bueiros podem ser reciclados, gerando fonte de renda para cooperativas de reciclagem.
   
![LOGO](https://github.com/vanessadaluz6/bueiro_mais_inteligente/blob/master/fotos-bueirofofo/logo.png)

## Manual do Usuário

### Como Funciona o Bueiro+ inteligente?

#### Monitoramento

O [site](http://bueiro-verde.herokuapp.com/) permite que o usuário tenha acesso remoto, apenas sendo necessário conexão com a internet.

### Informações técnicas


#### Materiais 

- [ESP8266](https://cdn-shop.adafruit.com/product-files/2471/0A-ESP8266__Datasheet__EN_v4.3.pdf)
- Sensor de Carga 50kg
- Sensor Ultrasonico HY-SRF05
- Arduino UNO

#### O Circuito

![CIRCUITO](https://github.com/vanessadaluz6/bueiro_mais_inteligente/blob/master/fotos-bueirofofo/Capturar.JPG)

#### A Página Web

A página web está hospedada gratuitamente no Heroku, uma plataforma cloud que permite o deploy de aplicações para desenvolvedores. Foi utilizado HTML e CSS, para poder organizar o site, como também Python, para reagir à eventos e fazer a comunicação com o software para computador e para a ESP8266. É notável indicar a importância da biblioteca Flask feita pela comunidade do Python, que é bastante crítica para a realização da comunicação e o deploy do servidor.

### QT Creator

Essa interface tem como objetivo auxiliar o controle dos bueiros inteligentes, principalmente na configuração da porta serial, velocidade e no monitoramento do bueiro, em relação aos sensores de carga e nível utilizando uma interface gráfica intuitiva.   

![inicio](https://github.com/vanessadaluz6/bueiro_mais_inteligente/blob/master/fotos-bueirofofo/telainicial.png)

### Conexão

![conexao](https://github.com/vanessadaluz6/bueiro_mais_inteligente/blob/master/fotos-bueirofofo/configura%C3%A7%C3%B5es.png)



### Projeto da Disciplina Técnicas de Programação do curso de Engenharia Elétrica - IFPB

Para maiores informações, dúvidas ou feedback:
- lucas.paulo@academico.ifpb.edu.br
- taynara.lopes@academico.ifpb.edu.br
- vanessa.luz@academico.ifpb.edu.br

